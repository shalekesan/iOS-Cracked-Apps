//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "aluLocationManagerDelegate.h"

@class NSString, aluLocationManager;

@interface aluReportDeviceLocationService : NSObject <aluLocationManagerDelegate>
{
    aluLocationManager *_locationManager;
}

+ (void)reportDeviceLocationService;
+ (id)sharedInstance;
@property(retain, nonatomic) aluLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2;
- (void)reportLocation:(id)arg1;
- (id)getHost;
- (void)reportOnMainThread;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

