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
	{ 0x46aed09d, "video_ioctl2" },
	{ 0xeff56534, "v4l2_event_unsubscribe" },
	{ 0x705e157, "v4l2_ctrl_subscribe_event" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x5b873230, "si476x_core_cmd_agc_status" },
	{ 0x4b15cdc4, "si476x_core_cmd_fm_acf_status" },
	{ 0x411baca9, "si476x_core_cmd_fm_phase_div_status" },
	{ 0x4b25119f, "si476x_core_cmd_fm_rds_blockcount" },
	{ 0x71a3f765, "si476x_core_cmd_fm_rsq_status" },
	{ 0xcee050e6, "si476x_core_cmd_fm_seek_start" },
	{ 0xaea1b275, "si476x_core_cmd_fm_tune_freq" },
	{ 0xa7e94dd0, "si476x_core_cmd_am_acf_status" },
	{ 0xef921209, "si476x_core_cmd_am_rsq_status" },
	{ 0xa9199c3e, "si476x_core_cmd_am_seek_start" },
	{ 0xb805b810, "si476x_core_cmd_am_tune_freq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x1aa04911, "si476x_core_start" },
	{ 0x16ca0d37, "si476x_core_stop" },
	{ 0xf24ed924, "si476x_core_cmd_fm_phase_diversity" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1b7d4dbf, "regcache_sync_region" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xd8d4ff46, "v4l2_device_set_name" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0xe10f360a, "si476x_core_is_a_primary_tuner" },
	{ 0x218a8690, "si476x_core_has_am" },
	{ 0xe3669e1b, "si476x_core_is_a_secondary_tuner" },
	{ 0x98c2955f, "si476x_core_has_diversity" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbcb8e17e, "si476x_core_cmd_fm_rds_status" },
	{ 0xa8362576, "si476x_core_is_in_am_receiver_mode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x68ae0f05, "v4l2_ctrl_poll" },
	{ 0xb6613685, "si476x_core_set_power_state" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0xf75a75c3, "v4l2_fh_is_singular" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,si476x-core");


MODULE_INFO(srcversion, "5640999F8DB1B7D164E8CB2");
