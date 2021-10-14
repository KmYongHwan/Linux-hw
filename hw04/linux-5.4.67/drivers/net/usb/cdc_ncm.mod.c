#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xa6c77a72, "usb_altnum_to_altsetting" },
	{ 0xb1eef0f0, "usbnet_resume" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xcd7a5441, "usbnet_probe" },
	{ 0xed7e42ab, "usbnet_link_change" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x75f28e4a, "usbnet_disconnect" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xef01084a, "usbnet_stop" },
	{ 0x5c892d31, "usbnet_update_max_qlen" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4f87e6b7, "usbnet_nway_reset" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xdf3916c9, "usbnet_set_link_ksettings" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x48ea3d5, "usbnet_get_stats64" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe497e793, "usbnet_get_link_ksettings" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0x12faebc3, "usbnet_get_drvinfo" },
	{ 0x96c4d8d3, "usbnet_start_xmit" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xb17d2c71, "usbnet_suspend" },
	{ 0x34dbbe18, "usbnet_get_link" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xb77794f, "usbnet_read_cmd" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x8cf48c0c, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15939d21, "cdc_parse_cdc_header" },
	{ 0x1e543389, "usbnet_get_ethernet_addr" },
	{ 0x2c0719d2, "usbnet_skb_return" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0xca102794, "usbnet_open" },
	{ 0xdd2fbeed, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe67aa9e2, "usbnet_unlink_rx_urbs" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xf87087c9, "usbnet_manage_power" },
	{ 0x2bec3ff2, "usbnet_write_cmd" },
	{ 0xf93d1693, "usbnet_set_msglevel" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "8365F7A3EC7909B4B3ECFB3");
