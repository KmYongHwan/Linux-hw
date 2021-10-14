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
	{ 0xb1c9131e, "cx231xx_unregister_extension" },
	{ 0x8750fb1a, "cx231xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc5850110, "printk" },
	{ 0x329de697, "dvb_create_media_graph" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0xb3927325, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0xac14880c, "dvb_module_probe" },
	{ 0x12e76401, "cx231xx_demod_reset" },
	{ 0xb022d0b7, "cx231xx_get_i2c_adap" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x47cd4608, "cx231xx_init_bulk" },
	{ 0x8f6f8594, "cx231xx_init_isoc" },
	{ 0x5c1968f9, "cx231xx_set_alt_setting" },
	{ 0x20497d76, "cx231xx_uninit_isoc" },
	{ 0x2083e342, "cx231xx_uninit_bulk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xacf1c9a7, "dvb_module_release" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0xeb260cbc, "cx231xx_set_mode" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cx231xx,dvb-core");


MODULE_INFO(srcversion, "65988010C2915E840DF0678");
