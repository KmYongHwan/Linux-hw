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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x284829a6, "smscore_register_hotplug" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd46e60aa, "smscore_get_board_id" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x68511cf0, "sms_board_setup" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x329de697, "dvb_create_media_graph" },
	{ 0xfdefdbe3, "usb_debug_root" },
	{ 0x75c72aae, "sms_board_event" },
	{ 0x963d42aa, "__wake_up_sync" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa16b4b86, "sms_board_lna_control" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x53dc8d88, "smscore_putbuffer" },
	{ 0xda4c81b, "media_device_cleanup" },
	{ 0xac74cd90, "smscore_unregister_hotplug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0xb414bac7, "sms_board_power" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x62e219f1, "sms_board_led_feedback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0b8d6ed, "smscore_register_client" },
	{ 0x987d8bf, "smscore_get_device_mode" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8a275f6b, "media_device_unregister" },
	{ 0xb3927325, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv,dvb-core,mc");


MODULE_INFO(srcversion, "F4AEFD7BFF9C4006017CCE8");
