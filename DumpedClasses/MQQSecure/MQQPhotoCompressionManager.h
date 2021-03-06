//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQUserDefaults, NSArray;

@interface MQQPhotoCompressionManager : NSObject
{
    _Bool _hasShowCompression;
    _Bool _hasShownBrowserTip;
    double _compressionSpeed;
    double _videoCompressionSpeed;
    MQQUserDefaults *_userDefaults;
    MQQUserDefaults *_tempListUserDefaults;
}

+ (id)shareManager;
@property(retain, nonatomic) MQQUserDefaults *tempListUserDefaults; // @synthesize tempListUserDefaults=_tempListUserDefaults;
@property(retain, nonatomic) MQQUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) double videoCompressionSpeed; // @synthesize videoCompressionSpeed=_videoCompressionSpeed;
@property(readonly, nonatomic) double compressionSpeed; // @synthesize compressionSpeed=_compressionSpeed;
@property(nonatomic) _Bool hasShownBrowserTip; // @synthesize hasShownBrowserTip=_hasShownBrowserTip;
@property(nonatomic) _Bool hasShowCompression; // @synthesize hasShowCompression=_hasShowCompression;
- (void)didStartCompressingPhotos;
@property(readonly, nonatomic) _Bool didCompressPhotos;
@property(retain, nonatomic) NSArray *lastCompressionList;
- (void)updateVideoCompressionSpeed:(double)arg1;
- (void)updateCompressionSpeed:(double)arg1;
- (void)dealloc;
- (id)init;

@end

