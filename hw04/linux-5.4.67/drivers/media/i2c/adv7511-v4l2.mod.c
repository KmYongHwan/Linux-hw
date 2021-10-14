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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xf8a9fd43, "cec_allocate_adapter" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x510a2188, "cec_received_msg_ts" },
	{ 0xad01daf9, "cec_transmit_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x3aa68d7a, "v4l2_find_dv_timings_cap" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb08e5821, "cec_s_phys_addr" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x5458e80d, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0xc946d02b, "i2c_smbus_xfer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0xb248b951, "cec_delete_adapter" },
	{ 0x4d78006b, "cec_register_adapter" },
	{ 0x7408623a, "cec_unregister_adapter" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc,videodev,v4l2-dv-timings");

MODULE_ALIAS("i2c:adv7511-v4l2");

MODULE_INFO(srcversion, "268DE6F6764B4737BBB750E");
