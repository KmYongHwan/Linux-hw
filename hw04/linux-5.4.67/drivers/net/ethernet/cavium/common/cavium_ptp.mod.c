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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x862258db, "timecounter_init" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xccbc429c, "ptp_clock_unregister" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9cfd0b29, "pcim_iounmap_regions" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc1d2d562, "ptp_clock_register" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000177Dd0000A00Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4E8ED44B37A373419ADBBED");
