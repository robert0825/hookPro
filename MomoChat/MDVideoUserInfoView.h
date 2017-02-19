//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDUserIconsView, NSString, UIImageView, UILabel;

@interface MDVideoUserInfoView : UIView
{
    UIImageView *_headImageView;
    MDUserIconsView *_iconsView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    NSString *_momoid;
}

@property(retain, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MDUserIconsView *iconsView; // @synthesize iconsView=_iconsView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)headImageViewTaped:(id)arg1;
- (void)decorateVideoUserInfoWithMomoId:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
