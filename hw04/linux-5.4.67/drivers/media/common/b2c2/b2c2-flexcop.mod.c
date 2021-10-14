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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd17a638f, "s5h1420_get_tuner_i2c_adapter" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x37d26541, "cx24113_agc_callback" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0xebd3eb9d, "cx24123_get_tuner_i2c_adapter" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x71deb539, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xb3927325, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "s5h1420,dvb-core,cx24113,cx24123");


MODULE_INFO(srcversion, "99DAA093927433C0AB79241");
