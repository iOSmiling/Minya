#import <UIKit/UIKit.h>

#import "FlickrKit.h"
#import "FKDUBlocks.h"
#import "FKDUConcurrentOperation.h"
#import "FKDUDefaultDiskCache.h"
#import "FKDUDiskCache.h"
#import "FKDUNetworkController.h"
#import "FKDUNetworkOperation.h"
#import "FKDUStreamUtil.h"
#import "FKDataTypes.h"
#import "FKAPIMethods.h"
#import "FKFlickrAPIMethod.h"
#import "FKFlickrActivityUserComments.h"
#import "FKFlickrActivityUserPhotos.h"
#import "FKFlickrAuthCheckToken.h"
#import "FKFlickrAuthGetFrob.h"
#import "FKFlickrAuthGetFullToken.h"
#import "FKFlickrAuthGetToken.h"
#import "FKFlickrAuthOauthCheckToken.h"
#import "FKFlickrAuthOauthGetAccessToken.h"
#import "FKFlickrBlogsGetList.h"
#import "FKFlickrBlogsGetServices.h"
#import "FKFlickrBlogsPostPhoto.h"
#import "FKFlickrCamerasGetBrandModels.h"
#import "FKFlickrCamerasGetBrands.h"
#import "FKFlickrCollectionsGetInfo.h"
#import "FKFlickrCollectionsGetTree.h"
#import "FKFlickrCommonsGetInstitutions.h"
#import "FKFlickrContactsGetList.h"
#import "FKFlickrContactsGetListRecentlyUploaded.h"
#import "FKFlickrContactsGetPublicList.h"
#import "FKFlickrContactsGetTaggingSuggestions.h"
#import "FKFlickrFavoritesAdd.h"
#import "FKFlickrFavoritesGetContext.h"
#import "FKFlickrFavoritesGetList.h"
#import "FKFlickrFavoritesGetPublicList.h"
#import "FKFlickrFavoritesRemove.h"
#import "FKFlickrGalleriesAddPhoto.h"
#import "FKFlickrGalleriesCreate.h"
#import "FKFlickrGalleriesEditMeta.h"
#import "FKFlickrGalleriesEditPhoto.h"
#import "FKFlickrGalleriesEditPhotos.h"
#import "FKFlickrGalleriesGetInfo.h"
#import "FKFlickrGalleriesGetList.h"
#import "FKFlickrGalleriesGetListForPhoto.h"
#import "FKFlickrGalleriesGetPhotos.h"
#import "FKFlickrGroupsDiscussRepliesAdd.h"
#import "FKFlickrGroupsDiscussRepliesDelete.h"
#import "FKFlickrGroupsDiscussRepliesEdit.h"
#import "FKFlickrGroupsDiscussRepliesGetInfo.h"
#import "FKFlickrGroupsDiscussRepliesGetList.h"
#import "FKFlickrGroupsDiscussTopicsAdd.h"
#import "FKFlickrGroupsDiscussTopicsGetInfo.h"
#import "FKFlickrGroupsDiscussTopicsGetList.h"
#import "FKFlickrGroupsBrowse.h"
#import "FKFlickrGroupsGetInfo.h"
#import "FKFlickrGroupsJoin.h"
#import "FKFlickrGroupsJoinRequest.h"
#import "FKFlickrGroupsLeave.h"
#import "FKFlickrGroupsSearch.h"
#import "FKFlickrGroupsMembersGetList.h"
#import "FKFlickrGroupsPoolsAdd.h"
#import "FKFlickrGroupsPoolsGetContext.h"
#import "FKFlickrGroupsPoolsGetGroups.h"
#import "FKFlickrGroupsPoolsGetPhotos.h"
#import "FKFlickrGroupsPoolsRemove.h"
#import "FKFlickrInterestingnessGetList.h"
#import "FKFlickrMachinetagsGetNamespaces.h"
#import "FKFlickrMachinetagsGetPairs.h"
#import "FKFlickrMachinetagsGetPredicates.h"
#import "FKFlickrMachinetagsGetRecentValues.h"
#import "FKFlickrMachinetagsGetValues.h"
#import "FKFlickrPandaGetList.h"
#import "FKFlickrPandaGetPhotos.h"
#import "FKFlickrPeopleFindByEmail.h"
#import "FKFlickrPeopleFindByUsername.h"
#import "FKFlickrPeopleGetGroups.h"
#import "FKFlickrPeopleGetInfo.h"
#import "FKFlickrPeopleGetLimits.h"
#import "FKFlickrPeopleGetPhotos.h"
#import "FKFlickrPeopleGetPhotosOf.h"
#import "FKFlickrPeopleGetPublicGroups.h"
#import "FKFlickrPeopleGetPublicPhotos.h"
#import "FKFlickrPeopleGetUploadStatus.h"
#import "FKFlickrPhotosCommentsAddComment.h"
#import "FKFlickrPhotosCommentsDeleteComment.h"
#import "FKFlickrPhotosCommentsEditComment.h"
#import "FKFlickrPhotosCommentsGetList.h"
#import "FKFlickrPhotosCommentsGetRecentForContacts.h"
#import "FKFlickrPhotosAddTags.h"
#import "FKFlickrPhotosDelete.h"
#import "FKFlickrPhotosGetAllContexts.h"
#import "FKFlickrPhotosGetContactsPhotos.h"
#import "FKFlickrPhotosGetContactsPublicPhotos.h"
#import "FKFlickrPhotosGetContext.h"
#import "FKFlickrPhotosGetCounts.h"
#import "FKFlickrPhotosGetExif.h"
#import "FKFlickrPhotosGetFavorites.h"
#import "FKFlickrPhotosGetInfo.h"
#import "FKFlickrPhotosGetNotInSet.h"
#import "FKFlickrPhotosGetPerms.h"
#import "FKFlickrPhotosGetRecent.h"
#import "FKFlickrPhotosGetSizes.h"
#import "FKFlickrPhotosGetUntagged.h"
#import "FKFlickrPhotosGetWithGeoData.h"
#import "FKFlickrPhotosGetWithoutGeoData.h"
#import "FKFlickrPhotosRecentlyUpdated.h"
#import "FKFlickrPhotosRemoveTag.h"
#import "FKFlickrPhotosSearch.h"
#import "FKFlickrPhotosSetContentType.h"
#import "FKFlickrPhotosSetDates.h"
#import "FKFlickrPhotosSetMeta.h"
#import "FKFlickrPhotosSetPerms.h"
#import "FKFlickrPhotosSetSafetyLevel.h"
#import "FKFlickrPhotosSetTags.h"
#import "FKFlickrPhotosGeoBatchCorrectLocation.h"
#import "FKFlickrPhotosGeoCorrectLocation.h"
#import "FKFlickrPhotosGeoGetLocation.h"
#import "FKFlickrPhotosGeoGetPerms.h"
#import "FKFlickrPhotosGeoPhotosForLocation.h"
#import "FKFlickrPhotosGeoRemoveLocation.h"
#import "FKFlickrPhotosGeoSetContext.h"
#import "FKFlickrPhotosGeoSetLocation.h"
#import "FKFlickrPhotosGeoSetPerms.h"
#import "FKFlickrPhotosLicensesGetInfo.h"
#import "FKFlickrPhotosLicensesSetLicense.h"
#import "FKFlickrPhotosNotesAdd.h"
#import "FKFlickrPhotosNotesDelete.h"
#import "FKFlickrPhotosNotesEdit.h"
#import "FKFlickrPhotosPeopleAdd.h"
#import "FKFlickrPhotosPeopleDelete.h"
#import "FKFlickrPhotosPeopleDeleteCoords.h"
#import "FKFlickrPhotosPeopleEditCoords.h"
#import "FKFlickrPhotosPeopleGetList.h"
#import "FKFlickrPhotosSuggestionsApproveSuggestion.h"
#import "FKFlickrPhotosSuggestionsGetList.h"
#import "FKFlickrPhotosSuggestionsRejectSuggestion.h"
#import "FKFlickrPhotosSuggestionsRemoveSuggestion.h"
#import "FKFlickrPhotosSuggestionsSuggestLocation.h"
#import "FKFlickrPhotosTransformRotate.h"
#import "FKFlickrPhotosUploadCheckTickets.h"
#import "FKFlickrPhotosetsCommentsAddComment.h"
#import "FKFlickrPhotosetsCommentsDeleteComment.h"
#import "FKFlickrPhotosetsCommentsEditComment.h"
#import "FKFlickrPhotosetsCommentsGetList.h"
#import "FKFlickrPhotosetsAddPhoto.h"
#import "FKFlickrPhotosetsCreate.h"
#import "FKFlickrPhotosetsDelete.h"
#import "FKFlickrPhotosetsEditMeta.h"
#import "FKFlickrPhotosetsEditPhotos.h"
#import "FKFlickrPhotosetsGetContext.h"
#import "FKFlickrPhotosetsGetInfo.h"
#import "FKFlickrPhotosetsGetList.h"
#import "FKFlickrPhotosetsGetPhotos.h"
#import "FKFlickrPhotosetsOrderSets.h"
#import "FKFlickrPhotosetsRemovePhoto.h"
#import "FKFlickrPhotosetsRemovePhotos.h"
#import "FKFlickrPhotosetsReorderPhotos.h"
#import "FKFlickrPhotosetsSetPrimaryPhoto.h"
#import "FKFlickrPlacesFind.h"
#import "FKFlickrPlacesFindByLatLon.h"
#import "FKFlickrPlacesGetChildrenWithPhotosPublic.h"
#import "FKFlickrPlacesGetInfo.h"
#import "FKFlickrPlacesGetInfoByUrl.h"
#import "FKFlickrPlacesGetPlaceTypes.h"
#import "FKFlickrPlacesGetShapeHistory.h"
#import "FKFlickrPlacesGetTopPlacesList.h"
#import "FKFlickrPlacesPlacesForBoundingBox.h"
#import "FKFlickrPlacesPlacesForContacts.h"
#import "FKFlickrPlacesPlacesForTags.h"
#import "FKFlickrPlacesPlacesForUser.h"
#import "FKFlickrPlacesResolvePlaceId.h"
#import "FKFlickrPlacesResolvePlaceURL.h"
#import "FKFlickrPlacesTagsForPlace.h"
#import "FKFlickrPrefsGetContentType.h"
#import "FKFlickrPrefsGetGeoPerms.h"
#import "FKFlickrPrefsGetHidden.h"
#import "FKFlickrPrefsGetPrivacy.h"
#import "FKFlickrPrefsGetSafetyLevel.h"
#import "FKFlickrPushGetSubscriptions.h"
#import "FKFlickrPushGetTopics.h"
#import "FKFlickrPushSubscribe.h"
#import "FKFlickrPushUnsubscribe.h"
#import "FKFlickrReflectionGetMethodInfo.h"
#import "FKFlickrReflectionGetMethods.h"
#import "FKFlickrStatsGetCollectionDomains.h"
#import "FKFlickrStatsGetCollectionReferrers.h"
#import "FKFlickrStatsGetCollectionStats.h"
#import "FKFlickrStatsGetCSVFiles.h"
#import "FKFlickrStatsGetPhotoDomains.h"
#import "FKFlickrStatsGetPhotoReferrers.h"
#import "FKFlickrStatsGetPhotosetDomains.h"
#import "FKFlickrStatsGetPhotosetReferrers.h"
#import "FKFlickrStatsGetPhotosetStats.h"
#import "FKFlickrStatsGetPhotoStats.h"
#import "FKFlickrStatsGetPhotostreamDomains.h"
#import "FKFlickrStatsGetPhotostreamReferrers.h"
#import "FKFlickrStatsGetPhotostreamStats.h"
#import "FKFlickrStatsGetPopularPhotos.h"
#import "FKFlickrStatsGetTotalViews.h"
#import "FKFlickrTagsGetClusterPhotos.h"
#import "FKFlickrTagsGetClusters.h"
#import "FKFlickrTagsGetHotList.h"
#import "FKFlickrTagsGetListPhoto.h"
#import "FKFlickrTagsGetListUser.h"
#import "FKFlickrTagsGetListUserPopular.h"
#import "FKFlickrTagsGetListUserRaw.h"
#import "FKFlickrTagsGetMostFrequentlyUsed.h"
#import "FKFlickrTagsGetRelated.h"
#import "FKFlickrTestEcho.h"
#import "FKFlickrTestLogin.h"
#import "FKFlickrTestNull.h"
#import "FKFlickrUrlsGetGroup.h"
#import "FKFlickrUrlsGetUserPhotos.h"
#import "FKFlickrUrlsGetUserProfile.h"
#import "FKFlickrUrlsLookupGallery.h"
#import "FKFlickrUrlsLookupGroup.h"
#import "FKFlickrUrlsLookupUser.h"
#import "FKDUReachability.h"
#import "FKFlickrNetworkOperation.h"
#import "FKImageUploadNetworkOperation.h"
#import "FKUploadRespone.h"
#import "FKURLBuilder.h"
#import "FKReachability.h"
#import "FKOFHMACSha1Base64.h"
#import "FKUtilities.h"

FOUNDATION_EXPORT double FlickrKitVersionNumber;
FOUNDATION_EXPORT const unsigned char FlickrKitVersionString[];

