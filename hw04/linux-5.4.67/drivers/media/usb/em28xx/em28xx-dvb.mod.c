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
	{ 0x50425fbf, "param_ops_short" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x76ec27ca, "em28xx_unregister_extension" },
	{ 0x8156003, "em28xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x17a0a991, "em28xx_uninit_usb_xfer" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0x329de697, "dvb_create_media_graph" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xb3927325, "dvb_dmxdev_init" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0xef6d6ae2, "em28xx_alloc_urbs" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0xc5850110, "printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xc834ae00, "em28xx_setup_xc3028" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xaed05f15, "em28xx_init_usb_xfer" },
	{ 0x37c802cf, "dvb_frontend_suspend" },
	{ 0x4ba6808b, "dvb_frontend_resume" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8b266301, "em28xx_stop_urbs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x43dfedb5, "em28xx_write_reg_bits" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x7c3163f1, "em28xx_write_reg" },
	{ 0xf894ed67, "em28xx_gpio_set" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xacf1c9a7, "dvb_module_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xac14880c, "dvb_module_probe" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xd44fc557, "em28xx_set_mode" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "em28xx,dvb-core");


MODULE_INFO(srcversion, "F3DF3D47242A31857C962F0");
