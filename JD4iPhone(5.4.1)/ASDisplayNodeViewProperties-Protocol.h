//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, UIColor;

@protocol ASDisplayNodeViewProperties
@property(copy, nonatomic) NSString *accessibilityIdentifier;
@property(nonatomic, getter=asyncdisplaykit_isAsyncTransactionContainer, setter=asyncdisplaykit_setAsyncTransactionContainer:) _Bool asyncdisplaykit_asyncTransactionContainer;
@property(nonatomic, getter=isExclusiveTouch) _Bool exclusiveTouch;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic) long long contentMode;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) double alpha;
@property(retain, nonatomic) UIColor *tintColor;
@property(nonatomic) unsigned long long autoresizingMask;
@property(nonatomic) _Bool autoresizesSubviews;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(nonatomic) _Bool clipsToBounds;
@end
