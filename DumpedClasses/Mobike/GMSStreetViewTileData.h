//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSStreetViewTileIndex, NSData;

@interface GMSStreetViewTileData : NSObject
{
    GMSStreetViewTileIndex *_index;
    NSData *_tileImageData;
}

@property(readonly, nonatomic) NSData *tileImageData; // @synthesize tileImageData=_tileImageData;
@property(readonly, nonatomic) GMSStreetViewTileIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)initWithProto:(id)arg1 zoomLevel:(int)arg2 panoramaID:(id)arg3;
- (id)init;

@end
