//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKMultiPoint.h"

#import "BMKOverlay.h"

@class NSArray, NSString;

@interface BMKPolyline : BMKMultiPoint <BMKOverlay>
{
    NSArray *_textureIndex;
}

+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 textureIndex:(id)arg3;
+ (id)polylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 textureIndex:(id)arg3;
+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *textureIndex; // @synthesize textureIndex=_textureIndex;
- (void).cxx_destruct;
- (void)postOverlayUpdateMessage;
- (_Bool)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 textureIndex:(id)arg3;
- (_Bool)setPolylineWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(long long)arg2 textureIndex:(id)arg3;
- (_Bool)setPolylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2 textureIndex:(id)arg3;
- (void)settextureIndex:(id)arg1;
- (_Bool)resetPoints:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;
- (_Bool)setPolylineWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(long long)arg2;
- (_Bool)setPolylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)dealloc;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
