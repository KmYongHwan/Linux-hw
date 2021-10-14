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
	{ 0x460ed3e9, "saa7134_ts_unregister" },
	{ 0x6f6f27d2, "saa7134_ts_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x71deb539, "request_firmware" },
	{ 0xf3a07da1, "vb2_dvb_dealloc_frontends" },
	{ 0x7bfd4444, "vb2_dvb_register_bus" },
	{ 0x4e83446, "saa7134_tuner_callback" },
	{ 0x3498c007, "vb2_queue_init" },
	{ 0x36aecacd, "vb2_dma_sg_memops" },
	{ 0x8d1a4c0c, "saa7134_ts_qops" },
	{ 0xa240c3bf, "vb2_dvb_alloc_frontend" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5272d99, "saa7134_set_gpio" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xc5850110, "printk" },
	{ 0x11d491c0, "vb2_queue_release" },
	{ 0x73f66011, "vb2_dvb_unregister_bus" },
	{ 0xc085bf, "vb2_dvb_get_frontend" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7134,videobuf2-dvb,videobuf2-v4l2,videobuf2-dma-sg");


MODULE_INFO(srcversion, "26696C07EEE9CFB88FF0351");
