//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVConfigModel.h"

@class NSDictionary;

@interface WVPackageConfigModel : WVConfigModel
{
    NSDictionary *_apps;
}

+ (id)subClassForProperties;
@property(readonly, nonatomic) NSDictionary *apps; // @synthesize apps=_apps;
- (void).cxx_destruct;
- (void)setApps:(id)arg1;
- (id)getValidOptionalApps;
- (id)getInstalledApps;
- (id)initWithVersion:(id)arg1 withType:(long long)arg2 withApps:(id)arg3;
- (id)initWithApps:(id)arg1;
- (id)init;

@end

