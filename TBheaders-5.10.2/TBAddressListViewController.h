//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBModelStatusHandler, TBShippingAddressItem, UIImageView, UITableView;

@interface TBAddressListViewController : TBViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate>
{
    _Bool _isLoading;	// 10 = 0xa
    _Bool _needBackToUpdateAddress;	// 11 = 0xb
    CDUnknownBlockType _addressSuccessBlock;	// 16 = 0x10
    CDUnknownBlockType _addressFailureBlock;	// 24 = 0x18
    NSString *_addressIdSelected;	// 32 = 0x20
    NSString *_orderSellerId;	// 40 = 0x28
    NSString *_buyToken;	// 48 = 0x30
    NSArray *_sites;	// 56 = 0x38
    long long _addressIdSelectedType;	// 64 = 0x40
    long long _addressRequestType;	// 72 = 0x48
    long long _addressAgencyType;	// 80 = 0x50
    NSMutableArray *_itemArray;	// 88 = 0x58
    NSArray *_shippingSitesArray;	// 96 = 0x60
    long long _shippingSiteSelected;	// 104 = 0x68
    UITableView *_tableView;	// 112 = 0x70
    UIImageView *_checkedImageView;	// 120 = 0x78
    TBModelStatusHandler *_statusHandler;	// 128 = 0x80
    TBShippingAddressItem *_itemSelect;	// 136 = 0x88
    TBShippingAddressItem *_cachedAddressItem;	// 144 = 0x90
    long long _extraCellNumber;	// 152 = 0x98
}

@property(nonatomic) long long extraCellNumber; // @synthesize extraCellNumber=_extraCellNumber;
@property(nonatomic) _Bool needBackToUpdateAddress; // @synthesize needBackToUpdateAddress=_needBackToUpdateAddress;
@property(retain, nonatomic) TBShippingAddressItem *cachedAddressItem; // @synthesize cachedAddressItem=_cachedAddressItem;
@property(retain, nonatomic) TBShippingAddressItem *itemSelect; // @synthesize itemSelect=_itemSelect;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) UIImageView *checkedImageView; // @synthesize checkedImageView=_checkedImageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long shippingSiteSelected; // @synthesize shippingSiteSelected=_shippingSiteSelected;
@property(retain, nonatomic) NSArray *shippingSitesArray; // @synthesize shippingSitesArray=_shippingSitesArray;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(nonatomic) long long addressAgencyType; // @synthesize addressAgencyType=_addressAgencyType;
@property(nonatomic) long long addressRequestType; // @synthesize addressRequestType=_addressRequestType;
@property(nonatomic) long long addressIdSelectedType; // @synthesize addressIdSelectedType=_addressIdSelectedType;
@property(retain, nonatomic) NSArray *sites; // @synthesize sites=_sites;
@property(retain, nonatomic) NSString *buyToken; // @synthesize buyToken=_buyToken;
@property(retain, nonatomic) NSString *orderSellerId; // @synthesize orderSellerId=_orderSellerId;
@property(retain, nonatomic) NSString *addressIdSelected; // @synthesize addressIdSelected=_addressIdSelected;
@property(copy, nonatomic) CDUnknownBlockType addressFailureBlock; // @synthesize addressFailureBlock=_addressFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType addressSuccessBlock; // @synthesize addressSuccessBlock=_addressSuccessBlock;
- (void).cxx_destruct;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)showFailedView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isSelfPickUpAddrSelected;
- (id)configExtraCell:(id)arg1 Title:(id)arg2 buttonTag:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)currentSelectedAddressChange:(id)arg1;
- (void)jumpToHelp:(id)arg1;
- (void)jumpToFactoringService:(id)arg1;
- (void)setSelectedItemBySelectedDeliverID;
- (unsigned long long)fetchDefaultAddress;
- (id)configFactoringUrlStringForButtonTag:(long long)arg1;
- (id)factoringItem;
- (id)defaultItem;
- (id)configAddressDetailLabelWithText:(id)arg1;
- (void)setupView;
- (void)showEmptyView:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)backItemClicked:(id)arg1;
- (void)showAddressManageView:(id)arg1;
- (void)saveShopStationItemToCache:(id)arg1;
- (void)loadCachedShopStationItem;
- (void)loadData;
- (void)showDataView;
- (void)clear;
- (void)viewDidUnload;
- (void)dealloc;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
