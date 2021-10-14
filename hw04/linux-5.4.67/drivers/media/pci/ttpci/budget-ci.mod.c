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
	{ 0x565bd19e, "saa7146_unregister_extension" },
	{ 0x6c405a96, "saa7146_register_extension" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x87672ec9, "ttpci_budget_irq10_handler" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x63daea24, "dvb_ca_en50221_init" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2a2bf5a9, "ttpci_budget_init_hooks" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0xcabf851, "ttpci_budget_init" },
	{ 0x7948c222, "budget_debug" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x73f2f7cd, "dvb_ca_en50221_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x85c3ee16, "ttpci_budget_deinit" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x71deb539, "request_firmware" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb9339e8e, "ttpci_budget_set_video_port" },
	{ 0x2b429a2d, "dvb_ca_en50221_frda_irq" },
	{ 0x26d70be2, "dvb_ca_en50221_camready_irq" },
	{ 0xff4fff11, "dvb_ca_en50221_camchange_irq" },
	{ 0x1cb65ec0, "saa7146_setgpio" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x229ac865, "ttpci_budget_debiread" },
	{ 0x917269e, "ttpci_budget_debiwrite" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,budget-core,rc-core,dvb-core");

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Fbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001012bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001017bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Bbc*sc*i*");

MODULE_INFO(srcversion, "3909D1EFB94CD7C663D044D");
