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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x350dca55, "v4l2_event_subdev_unsubscribe" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x510a2188, "cec_received_msg_ts" },
	{ 0xad01daf9, "cec_transmit_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xf8a9fd43, "cec_allocate_adapter" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0xbaa643b, "i2c_new_ancillary_device" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xfee2bce, "devm_gpiod_get_index_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf56238f4, "v4l2_find_dv_timings_cea861_vic" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb08e5821, "cec_s_phys_addr" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2bf67def, "v4l2_calc_aspect_ratio" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0x8f8d4341, "v4l2_get_edid_phys_addr" },
	{ 0x9425f1f7, "v4l2_subdev_notify_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x5458e80d, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0xf9cab3bd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x686bd540, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x1612c0b, "v4l2_detect_gtf" },
	{ 0xa97e00eb, "v4l2_detect_cvt" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x370cfe6e, "v4l2_dv_timings_presets" },
	{ 0x3aa68d7a, "v4l2_find_dv_timings_cap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0xb248b951, "cec_delete_adapter" },
	{ 0x4d78006b, "cec_register_adapter" },
	{ 0x7408623a, "cec_unregister_adapter" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x58412e48, "regmap_raw_write" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Cadi,adv7611");
MODULE_ALIAS("of:N*T*Cadi,adv7611C*");
MODULE_ALIAS("of:N*T*Cadi,adv7612");
MODULE_ALIAS("of:N*T*Cadi,adv7612C*");
MODULE_ALIAS("i2c:adv7604");
MODULE_ALIAS("i2c:adv7611");
MODULE_ALIAS("i2c:adv7612");

MODULE_INFO(srcversion, "800B601CB47F2B68175CEFF");
