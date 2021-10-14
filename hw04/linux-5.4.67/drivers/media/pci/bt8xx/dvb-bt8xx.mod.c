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
	{ 0x6bcbd8a9, "bttv_sub_unregister" },
	{ 0xe12c581b, "bttv_sub_register" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0xb3927325, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x528738d6, "bt878" },
	{ 0xd5d0bdef, "bt878_num" },
	{ 0x82a20659, "bttv_get_pcidev" },
	{ 0xdd64e639, "strscpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x71deb539, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11dc4b6d, "bttv_gpio_enable" },
	{ 0x8ecf4acc, "bttv_write_gpio" },
	{ 0x7e8c7c41, "bt878_start" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc30519e8, "bt878_stop" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bttv,dvb-core,bt878");


MODULE_INFO(srcversion, "DF37BB7C6E4944669CC8D78");
