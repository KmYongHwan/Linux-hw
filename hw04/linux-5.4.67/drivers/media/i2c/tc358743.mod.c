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
	{ 0x1416969e, "cec_transmit_attempt_done_ts" },
	{ 0x510a2188, "cec_received_msg_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9425f1f7, "v4l2_subdev_notify_event" },
	{ 0xb248b951, "cec_delete_adapter" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x4d78006b, "cec_register_adapter" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xf8a9fd43, "cec_allocate_adapter" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xb08e5821, "cec_s_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x7408623a, "cec_unregister_adapter" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x5458e80d, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0xf9cab3bd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x686bd540, "v4l2_src_change_event_subdev_subscribe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-dv-timings");

MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "3C6087BB39D67DF8B2E5688");
