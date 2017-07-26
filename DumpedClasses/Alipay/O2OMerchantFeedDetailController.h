//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OTemplateController.h"

#import "BEEPhotoBrowserDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface O2OMerchantFeedDetailController : O2OTemplateController <BEEPhotoBrowserDelegate>
{
    NSArray *_picturesArray;
    NSArray *_imageViews;
    NSMutableDictionary *_voucherManagerDic;
}

@property(retain, nonatomic) NSMutableDictionary *voucherManagerDic; // @synthesize voucherManagerDic=_voucherManagerDic;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSArray *picturesArray; // @synthesize picturesArray=_picturesArray;
- (void).cxx_destruct;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)didDisplay:(id)arg1 sender:(id)arg2;
- (void)clickFeedPicture:(id)arg1 view:(id)arg2;
- (void)applyVoucherAfterProtocol:(id)arg1 shopId:(id)arg2 supView:(id)arg3 monitorDic:(id)arg4;
- (void)updateReceiveState:(unsigned long long)arg1;
- (id)obtainProtocolItem:(id)arg1;
- (void)applyVoucher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
