//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WKNetworkSpeedObject;

@interface WKNetworkSpeedData : NSObject
{
    WKNetworkSpeedObject *_downLoad;
    WKNetworkSpeedObject *_upload;
    WKNetworkSpeedObject *_delay;
    NSString *_SSID;
    NSString *_BSSID;
}

@property(retain, nonatomic) NSString *BSSID; // @synthesize BSSID=_BSSID;
@property(retain, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(retain, nonatomic) WKNetworkSpeedObject *delay; // @synthesize delay=_delay;
@property(retain, nonatomic) WKNetworkSpeedObject *upload; // @synthesize upload=_upload;
@property(retain, nonatomic) WKNetworkSpeedObject *downLoad; // @synthesize downLoad=_downLoad;
- (void).cxx_destruct;

@end

