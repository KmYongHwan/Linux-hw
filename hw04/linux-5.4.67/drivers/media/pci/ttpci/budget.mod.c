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
	{ 0x87672ec9, "ttpci_budget_irq10_handler" },
	{ 0x565bd19e, "saa7146_unregister_extension" },
	{ 0x6c405a96, "saa7146_register_extension" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x2a2bf5a9, "ttpci_budget_init_hooks" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xcabf851, "ttpci_budget_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x71deb539, "request_firmware" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xc5850110, "printk" },
	{ 0x1cb65ec0, "saa7146_setgpio" },
	{ 0x7948c222, "budget_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x85c3ee16, "ttpci_budget_deinit" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "budget-core,saa7146,dvb-core");

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001004bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001005bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001013bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001016bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001018bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F60bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F61bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00005F60bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00005F61bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000014C4sd00001020bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F52bc*sc*i*");

MODULE_INFO(srcversion, "A32E7A03D51BC76F2A6EC16");
