//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSArray<TBLiveConventionModel>, NSArray<TBLiveLastShareItem>, NSArray<TBLiveURLItemModel>, NSDictionary, NSString, TBLiveBroadCasterAccountInfo, TBLiveDegradeInfoModel, TBLiveWeexBundleURL;

@interface TBLiveDetailInfoModel : TBJSONModel
{
    NSString *_liveId;
    NSString *_channelId;
    NSString *_type;
    NSString *_roomType;
    NSString *_status;
    NSString *_bizStatus;
    NSString *_title;
    NSString *_inputStreamUrl;
    NSString *_coverImg;
    NSString *_liveUrl;
    NSString *_liveUrlHls;
    NSArray<TBLiveURLItemModel> *_liveUrlList;
    NSArray<TBLiveConventionModel> *_conventionList;
    NSString *_replayUrl;
    NSString *_location;
    NSString *_topic;
    NSString *_timeLength;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_favorIcon;
    NSString *_favorImg;
    NSString *_endPushStreamTime;
    NSString *_joinCount;
    NSString *_itemCheck1111;
    NSString *_totalJoinCount;
    NSString *_viewCount;
    NSString *_praiseCount;
    NSString *_accountId;
    NSString *_nativeFeedDetailUrl;
    TBLiveBroadCasterAccountInfo *_broadCaster;
    NSString *_appointmentTime;
    NSString *_isPlayerLow;
    NSString *_inputCodeLevel;
    NSString *_roomNum;
    NSString *_maxItemNum;
    NSString *_curItemNum;
    NSArray<TBLiveLastShareItem> *_curItemList;
    TBLiveWeexBundleURL *_weexBundleUrl;
    NSString *_popupWindowUrl;
    NSDictionary *_videoCoreSettings;
    NSString *_partySettingUrl;
    NSString *_linklivePower;
    NSString *_tmallOnly;
    NSString *_tmallOnlyUrl;
    TBLiveDegradeInfoModel *_degradeInfo;
    NSDictionary *_responeDict;
    NSString *_sceneIcon;
    NSString *_sceneType;
    NSString *_sceneUrl;
    NSString *_hideLogo;
    NSString *_playErrorRedirectUrl;
    NSString *_overSeaBroadCaster;
    NSArray *_itemExtendTags;
    NSString *_landScape;
    NSString *_tidbitsUrl;
    NSString *_tidbitsUrlType;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *tidbitsUrlType; // @synthesize tidbitsUrlType=_tidbitsUrlType;
@property(copy, nonatomic) NSString *tidbitsUrl; // @synthesize tidbitsUrl=_tidbitsUrl;
@property(copy, nonatomic) NSString *landScape; // @synthesize landScape=_landScape;
@property(copy, nonatomic) NSArray *itemExtendTags; // @synthesize itemExtendTags=_itemExtendTags;
@property(copy, nonatomic) NSString *overSeaBroadCaster; // @synthesize overSeaBroadCaster=_overSeaBroadCaster;
@property(copy, nonatomic) NSString *playErrorRedirectUrl; // @synthesize playErrorRedirectUrl=_playErrorRedirectUrl;
@property(copy, nonatomic) NSString *hideLogo; // @synthesize hideLogo=_hideLogo;
@property(copy, nonatomic) NSString *sceneUrl; // @synthesize sceneUrl=_sceneUrl;
@property(copy, nonatomic) NSString *sceneType; // @synthesize sceneType=_sceneType;
@property(copy, nonatomic) NSString *sceneIcon; // @synthesize sceneIcon=_sceneIcon;
@property(retain, nonatomic) NSDictionary *responeDict; // @synthesize responeDict=_responeDict;
@property(retain, nonatomic) TBLiveDegradeInfoModel *degradeInfo; // @synthesize degradeInfo=_degradeInfo;
@property(copy, nonatomic) NSString *tmallOnlyUrl; // @synthesize tmallOnlyUrl=_tmallOnlyUrl;
@property(copy, nonatomic) NSString *tmallOnly; // @synthesize tmallOnly=_tmallOnly;
@property(copy, nonatomic) NSString *linklivePower; // @synthesize linklivePower=_linklivePower;
@property(copy, nonatomic) NSString *partySettingUrl; // @synthesize partySettingUrl=_partySettingUrl;
@property(retain, nonatomic) NSDictionary *videoCoreSettings; // @synthesize videoCoreSettings=_videoCoreSettings;
@property(copy, nonatomic) NSString *popupWindowUrl; // @synthesize popupWindowUrl=_popupWindowUrl;
@property(retain, nonatomic) TBLiveWeexBundleURL *weexBundleUrl; // @synthesize weexBundleUrl=_weexBundleUrl;
@property(retain, nonatomic) NSArray<TBLiveLastShareItem> *curItemList; // @synthesize curItemList=_curItemList;
@property(copy, nonatomic) NSString *curItemNum; // @synthesize curItemNum=_curItemNum;
@property(copy, nonatomic) NSString *maxItemNum; // @synthesize maxItemNum=_maxItemNum;
@property(copy, nonatomic) NSString *roomNum; // @synthesize roomNum=_roomNum;
@property(copy, nonatomic) NSString *inputCodeLevel; // @synthesize inputCodeLevel=_inputCodeLevel;
@property(copy, nonatomic) NSString *isPlayerLow; // @synthesize isPlayerLow=_isPlayerLow;
@property(copy, nonatomic) NSString *appointmentTime; // @synthesize appointmentTime=_appointmentTime;
@property(retain, nonatomic) TBLiveBroadCasterAccountInfo *broadCaster; // @synthesize broadCaster=_broadCaster;
@property(copy, nonatomic) NSString *nativeFeedDetailUrl; // @synthesize nativeFeedDetailUrl=_nativeFeedDetailUrl;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *praiseCount; // @synthesize praiseCount=_praiseCount;
@property(copy, nonatomic) NSString *viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *totalJoinCount; // @synthesize totalJoinCount=_totalJoinCount;
@property(copy, nonatomic) NSString *itemCheck1111; // @synthesize itemCheck1111=_itemCheck1111;
@property(copy, nonatomic) NSString *joinCount; // @synthesize joinCount=_joinCount;
@property(copy, nonatomic) NSString *endPushStreamTime; // @synthesize endPushStreamTime=_endPushStreamTime;
@property(copy, nonatomic) NSString *favorImg; // @synthesize favorImg=_favorImg;
@property(copy, nonatomic) NSString *favorIcon; // @synthesize favorIcon=_favorIcon;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *timeLength; // @synthesize timeLength=_timeLength;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *replayUrl; // @synthesize replayUrl=_replayUrl;
@property(retain, nonatomic) NSArray<TBLiveConventionModel> *conventionList; // @synthesize conventionList=_conventionList;
@property(retain, nonatomic) NSArray<TBLiveURLItemModel> *liveUrlList; // @synthesize liveUrlList=_liveUrlList;
@property(copy, nonatomic) NSString *liveUrlHls; // @synthesize liveUrlHls=_liveUrlHls;
@property(copy, nonatomic) NSString *liveUrl; // @synthesize liveUrl=_liveUrl;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(copy, nonatomic) NSString *inputStreamUrl; // @synthesize inputStreamUrl=_inputStreamUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bizStatus; // @synthesize bizStatus=_bizStatus;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *roomType; // @synthesize roomType=_roomType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;

@end

