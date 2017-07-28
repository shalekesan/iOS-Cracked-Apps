//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMLocationAuthTipView, FMMapView, NSString, UIImageView, UILabel;

@interface FMHouseHomeMapEntryCell : UITableViewCell <FMComponentCellProtocol>
{
    FMLocationAuthTipView *_noGpsView;
    FMMapView *_mapView;
    UILabel *_titleLabel;
    UIImageView *_titleSeperator;
    UIImageView *_locationIndicator;
    UILabel *_locationLabel;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIImageView *locationIndicator; // @synthesize locationIndicator=_locationIndicator;
@property(retain, nonatomic) UIImageView *titleSeperator; // @synthesize titleSeperator=_titleSeperator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FMMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)setupMapView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickOnOpenLocationButton:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

