//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XAdSDKManager : NSObject
{
    int _gen;
    int _ag;
    NSString *_avs;
    NSString *_appname;
    NSString *_lot;
    NSString *_lat;
}

+ (id)getAdSdkVersion;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSString *lot; // @synthesize lot=_lot;
@property(nonatomic) int ag; // @synthesize ag=_ag;
@property(nonatomic) int gen; // @synthesize gen=_gen;
@property(retain, nonatomic) NSString *appname; // @synthesize appname=_appname;
@property(retain, nonatomic) NSString *avs; // @synthesize avs=_avs;
- (void).cxx_destruct;
- (id)createAppContextWithDelegate:(id)arg1 frame:(struct CGRect)arg2 parameters:(id)arg3;
- (void)setDefaultProperty;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

