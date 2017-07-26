//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface Foursquare2 : NSObject
{
    CDUnknownBlockType _authorizationCallback;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _timeoutInterval;
}

+ (id)sharedInstance;
+ (id)constructURLWithPath:(id)arg1 parameters:(id)arg2;
+ (id)sendPostRequestWithPath:(id)arg1 parameters:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)sendGetRequestWithPath:(id)arg1 parameters:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)listGroupTypeToString:(unsigned long long)arg1;
+ (id)sortTypeToString:(unsigned long long)arg1;
+ (id)timeStampStringFromDate:(id)arg1;
+ (id)problemTypeToString:(unsigned long long)arg1;
+ (id)broadcastTypeToString:(unsigned long long)arg1;
+ (id)foursquareSettingNameToString:(unsigned long long)arg1;
+ (id)inentTypeToString:(unsigned long long)arg1;
+ (id)settingsSet:(unsigned long long)arg1 toValue:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)settingsGetAllCallback:(CDUnknownBlockType)arg1;
+ (id)tipSearchNearbyLatitude:(id)arg1 longitude:(id)arg2 near:(id)arg3 limit:(id)arg4 offset:(id)arg5 friendsOnly:(_Bool)arg6 query:(id)arg7 callback:(CDUnknownBlockType)arg8;
+ (id)tipAdd:(id)arg1 forVenue:(id)arg2 withURL:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)tipGetDetail:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)checkinLike:(id)arg1 like:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)checkinDeleteComment:(id)arg1 forCheckin:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)checkinAddComment:(id)arg1 text:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)checkinGetLikes:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)checkinGetRecentsByFriends:(id)arg1 longitude:(id)arg2 limit:(id)arg3 afterTimestamp:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)checkinAddAtVenue:(id)arg1 event:(id)arg2 shout:(id)arg3 broadcast:(unsigned long long)arg4 latitude:(id)arg5 longitude:(id)arg6 accuracyLL:(id)arg7 altitude:(id)arg8 accuracyAlt:(id)arg9 callback:(CDUnknownBlockType)arg10;
+ (id)checkinAddAtVenue:(id)arg1 shout:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)checkinGetDetail:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)venueGetPhotos:(id)arg1 limit:(id)arg2 offset:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)venueFlag:(id)arg1 problem:(unsigned long long)arg2 duplicateVenueID:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)venueGetMenu:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)venueGetTips:(id)arg1 sort:(unsigned long long)arg2 limit:(id)arg3 offset:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)venueGetHereNow:(id)arg1 limit:(id)arg2 offset:(id)arg3 afterTimestamp:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)venueTrendingNearByLatitude:(id)arg1 longitude:(id)arg2 limit:(id)arg3 radius:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)venueSearchInBoundingQuadrangleS:(id)arg1 w:(id)arg2 n:(id)arg3 e:(id)arg4 query:(id)arg5 limit:(id)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)venueSearchNearLocation:(id)arg1 query:(id)arg2 limit:(id)arg3 intent:(unsigned long long)arg4 radius:(id)arg5 categoryId:(id)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)venueSearchNearByLatitude:(id)arg1 longitude:(id)arg2 query:(id)arg3 limit:(id)arg4 intent:(unsigned long long)arg5 radius:(id)arg6 categoryId:(id)arg7 locale:(id)arg8 callback:(CDUnknownBlockType)arg9;
+ (id)venueGetCategoriesCallback:(CDUnknownBlockType)arg1;
+ (id)venueGetDetail:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)listFollowListWithId:(id)arg1 follow:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)listSuggestVenuesForListWithId:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)listAddVenueWithId:(id)arg1 listId:(id)arg2 text:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)listGetDetail:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)listAddWithName:(id)arg1 description:(id)arg2 collaborative:(_Bool)arg3 photoID:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)listDeleteItemWithId:(id)arg1 fromListWithId:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)listUpdateWithId:(id)arg1 name:(id)arg2 description:(id)arg3 collaborative:(_Bool)arg4 photoId:(id)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)listDeleteWithId:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userUpdatePhoto:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userSetPings:(_Bool)arg1 forFriend:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)userDenyFriend:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userApproveFriend:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userUnfriend:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userSendFriendRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userGetPhotos:(id)arg1 limit:(id)arg2 offset:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)userGetMayorships:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userGetLists:(id)arg1 group:(unsigned long long)arg2 latitude:(id)arg3 longitude:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)multiListGetLists:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)multiUserGetLists:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userGetVenueHistory:(id)arg1 after:(id)arg2 before:(id)arg3 categoryID:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)userGetTodos:(id)arg1 sort:(unsigned long long)arg2 latitude:(id)arg3 longitude:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (id)userGetTips:(id)arg1 limit:(id)arg2 offset:(id)arg3 sort:(unsigned long long)arg4 latitude:(id)arg5 longitude:(id)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)userGetFollowing:(id)arg1 offset:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)userGetFriends:(id)arg1 limit:(id)arg2 offset:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)userGetCheckins:(id)arg1 limit:(id)arg2 offset:(id)arg3 sort:(unsigned long long)arg4 after:(id)arg5 before:(id)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)userGetBadges:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)userGetLeaderboardCallback:(CDUnknownBlockType)arg1;
+ (id)userGetFriendRequestsCallback:(CDUnknownBlockType)arg1;
+ (id)userSearchWithPhone:(id)arg1 email:(id)arg2 twitter:(id)arg3 twitterSource:(id)arg4 facebookIDs:(id)arg5 name:(id)arg6 callback:(CDUnknownBlockType)arg7;
+ (id)userGetDetail:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)stringFromArray:(id)arg1;
+ (_Bool)isAuthorized;
+ (id)accessToken;
+ (void)removeAccessToken;
+ (void)setAccessToken:(id)arg1;
+ (id)classAttributes;
+ (void)setAttributeValue:(id)arg1 forKey:(id)arg2;
+ (void)setupFoursquareWithClientId:(id)arg1 secret:(id)arg2 callbackURL:(id)arg3;
+ (id)callbackQueue;
+ (void)setTimeoutInterval:(double)arg1;
+ (void)setCallbackQueue:(id)arg1;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) CDUnknownBlockType authorizationCallback; // @synthesize authorizationCallback=_authorizationCallback;
- (void).cxx_destruct;
- (id)uploadPhoto:(id)arg1 withParameters:(id)arg2 withImageData:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)sendRequestWithPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)init;

@end
