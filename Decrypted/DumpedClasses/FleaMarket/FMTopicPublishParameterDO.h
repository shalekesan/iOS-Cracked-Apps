//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMTopicPublishParameterDO.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface FMTopicPublishParameterDO : NSObject <FMTopicPublishParameterDO>
{
    _Bool _archive;
    _Bool _isNotice;
    _Bool _isTop;
    _Bool _updateImage;
    NSString *_activityEndTime;
    NSString *_activityOfficalTags;
    NSString *_activityPlace;
    NSString *_activityStartTime;
    NSNumber *_activityType;
    NSString *_area;
    NSString *_auctionType;
    NSNumber *_auditorId;
    NSString *_auditorNick;
    NSNumber *_charityTotalCnt;
    NSString *_city;
    NSString *_contacts;
    NSString *_desc;
    NSNumber *_divisionId;
    NSString *_donateArea;
    NSString *_donateDeliverId;
    NSString *_donateThings;
    NSString *_errorMessage;
    NSArray *_errorMessages;
    NSDictionary *_extraInfo;
    NSNumber *_fishPoolId;
    NSString *_from;
    NSString *_gps;
    NSNumber *_id;
    NSNumber *_isActivity;
    NSArray *_mainPic;
    NSString *_mainPicStr;
    NSArray *_otherPics;
    NSString *_otherPicsStr;
    NSString *_phone;
    NSString *_prov;
    NSString *_sponsor;
    NSArray *_tags;
    NSString *_title;
    unsigned long long _userId;
    NSString *_videoCoverUrl;
    unsigned long long _videoId;
    unsigned long long _videoLength;
    NSString *_videoMD5;
    NSString *_videoObject;
    NSNumber *_videoVersion;
    NSNumber *_voiceTime;
    NSString *_voiceUrl;
}

@property(copy, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
@property(retain, nonatomic) NSNumber *voiceTime; // @synthesize voiceTime=_voiceTime;
@property(retain, nonatomic) NSNumber *videoVersion; // @synthesize videoVersion=_videoVersion;
@property(copy, nonatomic) NSString *videoObject; // @synthesize videoObject=_videoObject;
@property(copy, nonatomic) NSString *videoMD5; // @synthesize videoMD5=_videoMD5;
@property(nonatomic) unsigned long long videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) unsigned long long videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *videoCoverUrl; // @synthesize videoCoverUrl=_videoCoverUrl;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool updateImage; // @synthesize updateImage=_updateImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *sponsor; // @synthesize sponsor=_sponsor;
@property(copy, nonatomic) NSString *prov; // @synthesize prov=_prov;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *otherPicsStr; // @synthesize otherPicsStr=_otherPicsStr;
@property(retain, nonatomic) NSArray *otherPics; // @synthesize otherPics=_otherPics;
@property(copy, nonatomic) NSString *mainPicStr; // @synthesize mainPicStr=_mainPicStr;
@property(retain, nonatomic) NSArray *mainPic; // @synthesize mainPic=_mainPic;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(nonatomic) _Bool isNotice; // @synthesize isNotice=_isNotice;
@property(retain, nonatomic) NSNumber *isActivity; // @synthesize isActivity=_isActivity;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *gps; // @synthesize gps=_gps;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSNumber *fishPoolId; // @synthesize fishPoolId=_fishPoolId;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSString *donateThings; // @synthesize donateThings=_donateThings;
@property(copy, nonatomic) NSString *donateDeliverId; // @synthesize donateDeliverId=_donateDeliverId;
@property(copy, nonatomic) NSString *donateArea; // @synthesize donateArea=_donateArea;
@property(retain, nonatomic) NSNumber *divisionId; // @synthesize divisionId=_divisionId;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSNumber *charityTotalCnt; // @synthesize charityTotalCnt=_charityTotalCnt;
@property(copy, nonatomic) NSString *auditorNick; // @synthesize auditorNick=_auditorNick;
@property(retain, nonatomic) NSNumber *auditorId; // @synthesize auditorId=_auditorId;
@property(copy, nonatomic) NSString *auctionType; // @synthesize auctionType=_auctionType;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(nonatomic) _Bool archive; // @synthesize archive=_archive;
@property(retain, nonatomic) NSNumber *activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSString *activityStartTime; // @synthesize activityStartTime=_activityStartTime;
@property(copy, nonatomic) NSString *activityPlace; // @synthesize activityPlace=_activityPlace;
@property(copy, nonatomic) NSString *activityOfficalTags; // @synthesize activityOfficalTags=_activityOfficalTags;
@property(copy, nonatomic) NSString *activityEndTime; // @synthesize activityEndTime=_activityEndTime;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

