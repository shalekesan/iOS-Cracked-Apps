//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSRecursiveLock;

@interface MADataSourceContainer : NSObject
{
    NSMutableArray *_internalDataSources;
    NSRecursiveLock *_dataSourcesLock;
    float _minZoom;
    float _maxZoom;
    struct MACoordinateBounds _latitudeLongitudeBoundingBox;
    unsigned long long _tileSideLength;
}

@property(nonatomic) float maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) float minZoom; // @synthesize minZoom=_minZoom;
@property(readonly, nonatomic) unsigned long long tileSideLength; // @synthesize tileSideLength=_tileSideLength;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)cancelAllDownloads;
- (void)removeAllDataSources;
- (void)moveDataSourceAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeDataSourceAtIndex:(unsigned long long)arg1;
- (void)removeDataSource:(id)arg1;
- (_Bool)addDataSource:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)addDataSource:(id)arg1;
- (_Bool)setDataSources:(id)arg1;
- (_Bool)setDataSource:(id)arg1;
- (id)dataSourceForUniqueCacheKey:(id)arg1;
- (unsigned long long)countOfDataSources;
@property(readonly, nonatomic) NSArray *dataSources;
- (void)setBoundingBoxFromTilesources;
- (id)init;

@end

