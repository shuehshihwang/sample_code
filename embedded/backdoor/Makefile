include $(TOPDIR)/rules.mk

PKG_NAME:=backdoor
PKG_VERSION:=1.0.0
PKG_RELEASE:=1

PKG_MAINTAINER:=Ralph Wang <john.doe@example.com>
# https://spdx.org/licenses/
PKG_LICENSE:=CC0-1.0

include $(INCLUDE_DIR)/package.mk
# include $(INCLUDE_DIR)/cmake.mk

MAKE_FLAGS += \
			  CC=$(TARGET_CC) \
			  BUILD_CC=$(HOSTCC)

define Package/backdoor
	SECTION:=utils
	# Select package by default
	#DEFAULT:=y
	CATEGORY:=Utilities
	TITLE:=Backdoor application for RD development.
	URL:=https://www.example.com
endef

define Package/backdoor/description
    This is a backdoor application for RD development purpose. 
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Package/backdoor/install
	$(CP) ./files/* $(1)/
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/bd_svr $(1)/usr/sbin/
endef

$(eval $(call BuildPackage,backdoor))
