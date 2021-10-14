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
	{ 0x509aae16, "param_get_uint" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x11ee123e, "mISDNipac_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4ef704ae, "mISDN_register_device" },
	{ 0x11a832a9, "mISDNipac_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x1cc9591c, "mISDN_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x3766e9a4, "param_set_uint" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDNipac,mISDN_core");

MODULE_ALIAS("pci:v00001133d0000E002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001133d0000E00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000002sv00000053sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000002sv00000052sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001048d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001048d00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001267d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv00000871sd0000FFA8bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00001187sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "668D3596DF80289CBF93B60");
