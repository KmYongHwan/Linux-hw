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
	{ 0x82d7b2fd, "v4l2_subdev_link_validate" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x3b13df12, "v4l2_async_register_subdev_sensor_common" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x6241682, "v4l2_ctrl_new_std_menu_items" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x610fc61f, "v4l2_ctrl_new_int_menu" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x8b94c8a7, "pm_runtime_get_if_in_use" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x2917a31a, "__v4l2_ctrl_modify_range" },
	{ 0xddb6a0e4, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x64a44a10, "__v4l2_ctrl_handler_setup" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc");

MODULE_ALIAS("acpi*:INT3479:*");

MODULE_INFO(srcversion, "598490A96950F9BA3477124");
