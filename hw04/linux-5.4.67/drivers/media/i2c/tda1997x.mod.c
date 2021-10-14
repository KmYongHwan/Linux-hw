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
	{ 0x82d7b2fd, "v4l2_subdev_link_validate" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x9425f1f7, "v4l2_subdev_notify_event" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7379b674, "devm_i2c_new_dummy_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x370cfe6e, "v4l2_dv_timings_presets" },
	{ 0x37a0cba, "kfree" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xef15cc44, "v4l2_hdmi_rx_colorimetry" },
	{ 0xf9cab3bd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x686bd540, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x69acdf38, "memcpy" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5458e80d, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings,snd-soc-core,mc,snd-pcm");

MODULE_ALIAS("of:N*T*Cnxp,tda19971");
MODULE_ALIAS("of:N*T*Cnxp,tda19971C*");
MODULE_ALIAS("of:N*T*Cnxp,tda19973");
MODULE_ALIAS("of:N*T*Cnxp,tda19973C*");
MODULE_ALIAS("i2c:tda19971");
MODULE_ALIAS("i2c:tda19973");

MODULE_INFO(srcversion, "FE6FA02F7875D3065BDBD43");
