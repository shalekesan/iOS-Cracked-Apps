//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMComponent.h"

@class FMFishpondUsersListComponent, FMNavigationBarComponent, NSString;

@interface FMFishpondUsersRootComponent : FMComponent
{
    FMNavigationBarComponent *_navigationBarComponent;
    FMFishpondUsersListComponent *_userListComponent;
    NSString *_fishpondID;
}

@property(retain, nonatomic) NSString *fishpondID; // @synthesize fishpondID=_fishpondID;
@property(retain, nonatomic) FMFishpondUsersListComponent *userListComponent; // @synthesize userListComponent=_userListComponent;
@property(retain, nonatomic) FMNavigationBarComponent *navigationBarComponent; // @synthesize navigationBarComponent=_navigationBarComponent;
- (void).cxx_destruct;
- (id)init;

@end

