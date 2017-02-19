//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDNavigationBar.h"

@class JDSearchBar, UIButton, UIImageView, UILabel;

@interface SearchNavigationBar : JDNavigationBar
{
    double _offset;
    UIImageView *_messageImageView;
    UIImageView *_singelNum;
    UIImageView *_twoNum;
    UILabel *_singelNumLabel;
    UILabel *_twoNumLabel;
    UIImageView *_redDot;
    id <SearchNavigationBarDelegate> _delegate;
    JDSearchBar *_searchBar;
    UIButton *_categoryButton;
}

@property(retain, nonatomic) UIButton *categoryButton; // @synthesize categoryButton=_categoryButton;
@property(retain, nonatomic) JDSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <SearchNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showDotView:(id)arg1;
- (void)hiddenRedView;
- (void)hiddenDotView;
- (void)categoryButtonClicked:(id)arg1;
- (void)setCategoryButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)createImage:(id)arg1 centerPoint:(struct CGPoint)arg2 FatherView:(id)arg3;
- (void)createCancelButton;
- (void)createMessageImage;
- (void)createMessageButton;
- (void)createSearchText;
- (void)createCameraButton;
- (double)getSearchTxtOffset;
- (double)getOffset;
- (id)initWithFrame:(struct CGRect)arg1;

@end
