//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UIColor, UIImage, UIImageView, UIView;

@interface FMCameraBaseViewController : UIViewController
{
    UIView *_titleView;
    UIButton *_titleButton;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIImageView *_imageView;
    UIImageView *_rightDivLine;
    UIImageView *_leftDivLine;
    UIImageView *titleExtraImg;
    UIView *bottomLine;
    int _cameraTitleType;
    NSString *_titleText;
    UIImage *_titleImage;
    NSString *_leftText;
    UIImage *_leftImage;
    UIImage *_leftSelectedImage;
    NSString *_rightText;
    UIImage *_rightImage;
    UIImage *_rightSelectedImage;
    UIColor *_rightBgColor;
}

+ (id)defaultAssetsLibrary;
@property(retain, nonatomic) UIColor *rightBgColor; // @synthesize rightBgColor=_rightBgColor;
@property(retain, nonatomic) UIImage *rightSelectedImage; // @synthesize rightSelectedImage=_rightSelectedImage;
@property(retain, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) NSString *rightText; // @synthesize rightText=_rightText;
@property(retain, nonatomic) UIImage *leftSelectedImage; // @synthesize leftSelectedImage=_leftSelectedImage;
@property(retain, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;
@property(retain, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) int cameraTitleType; // @synthesize cameraTitleType=_cameraTitleType;
@property(nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)titleAction:(id)arg1;
- (void)rightAction:(id)arg1;
- (void)leftAction:(id)arg1;
- (double)getTitleHeight;
- (void)setTitleTextColor:(id)arg1;
- (void)setTitleExtraImage:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;

@end

