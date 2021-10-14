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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x29361773, "complete" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x8339c695, "__video_register_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x4d4c8714, "si470x_set_freq" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xb7935f8d, "video_device_release_empty" },
	{ 0xf2282285, "si470x_viddev_template" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x4afa81bb, "si470x_ctrl_ops" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xcd078a11, "si470x_start" },
	{ 0x8fc84781, "v4l2_fh_open" },
	{ 0xe9c0d487, "si470x_stop" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0xf75a75c3, "v4l2_fh_is_singular" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "E506E0DBCFF3AEF4D278BC6");
