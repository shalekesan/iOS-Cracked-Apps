//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBNuxAppConfiguration.h>

@class FBNuxWildeAppEventManagerDataSource, FBQuickPromotionInterstitialDataSource, FBQuickPromotionMegaphoneDataSource, FBQuickPromotionWildeActionHandler, NSSet;

@interface FBNuxWildeAppConfiguration : FBNuxAppConfiguration
{
    FBQuickPromotionWildeActionHandler *_quickPromotionActionHandler;
    FBNuxWildeAppEventManagerDataSource *_appEventManagerDataSource;
    FBQuickPromotionInterstitialDataSource *_quickPromotionInterstitialDataSource;
    FBQuickPromotionMegaphoneDataSource *_quickPromotionMegaphoneDataSource;
    NSSet *_serverFetchEvents;
}

- (void).cxx_destruct;
- (id)serverFetchEvents;
- (id)quickPromotionMegaphoneDataSource;
- (id)quickPromotionInterstitialDataSource;
- (id)appEventManagerDataSource;
- (id)quickPromotionActionHandler;
- (id)initWithSession:(id)arg1;

@end
