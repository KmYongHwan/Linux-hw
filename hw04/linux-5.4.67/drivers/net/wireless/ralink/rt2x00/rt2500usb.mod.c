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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xb7ce766f, "rt2x00mac_tx_frames_pending" },
	{ 0x66df79b1, "rt2x00mac_get_ringparam" },
	{ 0xdd4eb582, "rt2x00mac_get_antenna" },
	{ 0x884429b3, "rt2x00mac_set_antenna" },
	{ 0x941eebc3, "rt2x00mac_flush" },
	{ 0x32137a00, "rt2x00mac_rfkill_poll" },
	{ 0xd71879ff, "rt2x00mac_conf_tx" },
	{ 0xc57e8cff, "rt2x00mac_get_stats" },
	{ 0x7cf2ee97, "rt2x00mac_sw_scan_complete" },
	{ 0x5c5b2217, "rt2x00mac_sw_scan_start" },
	{ 0xcd4cb488, "rt2x00mac_set_key" },
	{ 0xc464c689, "rt2x00mac_set_tim" },
	{ 0xc8274e41, "rt2x00mac_configure_filter" },
	{ 0xbbc9b90f, "rt2x00mac_bss_info_changed" },
	{ 0x37facb0a, "rt2x00mac_config" },
	{ 0xe495a845, "rt2x00mac_remove_interface" },
	{ 0x6486e2a0, "rt2x00mac_add_interface" },
	{ 0x5665f90b, "rt2x00mac_stop" },
	{ 0xbe2418b3, "rt2x00mac_start" },
	{ 0xe70e7f96, "rt2x00mac_tx" },
	{ 0x692d100, "rt2x00usb_flush_queue" },
	{ 0x173c4cc5, "rt2x00usb_kick_queue" },
	{ 0xb7c12337, "rt2x00usb_watchdog" },
	{ 0x55f258a4, "rt2x00usb_clear_entry" },
	{ 0x169fc499, "rt2x00usb_uninitialize" },
	{ 0xb8214572, "rt2x00usb_initialize" },
	{ 0x431decb3, "rt2x00usb_resume" },
	{ 0xe82fe8ac, "rt2x00usb_suspend" },
	{ 0x46f20201, "rt2x00usb_disconnect" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc6a70eb5, "rt2x00lib_set_mac_address" },
	{ 0x97e1eec8, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6d401de, "rt2x00usb_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x5aab5db7, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x15314fce, "consume_skb" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x676df39e, "rt2x00usb_vendor_request_buff" },
	{ 0xadab100e, "rt2x00usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00usb");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C9B29288CE51AC926D77AF");
