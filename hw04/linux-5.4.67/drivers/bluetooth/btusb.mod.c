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
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x837a48c7, "device_wakeup_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9778e580, "usb_get_from_anchor" },
	{ 0x3d61149f, "usb_enable_autosuspend" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x88987d0, "btrtl_shutdown_realtek" },
	{ 0x230b4e6e, "btrtl_setup_realtek" },
	{ 0x635b8043, "btbcm_setup_apple" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0x293b77df, "btbcm_set_bdaddr" },
	{ 0x32236811, "btbcm_setup_patchram" },
	{ 0xde2222e6, "usb_match_id" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0x99e7f29c, "btintel_set_diag" },
	{ 0xb341be41, "btintel_hw_error" },
	{ 0x15f41ace, "btintel_set_bdaddr" },
	{ 0xf5940b49, "btintel_set_diag_mfg" },
	{ 0xf2b4ea27, "gpiod_get_optional" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x93f3fa6c, "hci_recv_diag" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x5f2dc055, "btintel_set_event_mask" },
	{ 0x4f4a34d8, "btintel_load_ddc_config" },
	{ 0x984f562, "btintel_send_intel_reset" },
	{ 0xefce1de2, "btintel_download_firmware" },
	{ 0xa7c32b0d, "btintel_read_boot_params" },
	{ 0x57398834, "btintel_version_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3751a1b8, "__hci_cmd_send" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c636abf, "btintel_check_bdaddr" },
	{ 0x9a2cc37a, "btintel_set_event_mask_mfg" },
	{ 0x64daa48b, "btintel_exit_mfg" },
	{ 0xede283d, "release_firmware" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2895148f, "__hci_cmd_sync_ev" },
	{ 0xaa310c74, "btintel_enter_mfg" },
	{ 0x71deb539, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa9b14871, "btintel_read_version" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7e2d4ee, "__hci_cmd_sync" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btrtl,btbcm,bluetooth,btintel");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3CD7BE023732358B4F20408");
