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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x95e38aa1, "pcibios_resource_to_bus" },
	{ 0x7aed5f83, "pcmcia_register_socket" },
	{ 0x6fa16c0f, "pccard_nonstatic_ops" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x530406f0, "pcmcia_parse_events" },
	{ 0xc5850110, "printk" },
	{ 0x25424180, "pcmcia_unregister_socket" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia_core,pcmcia_rsrc");

MODULE_ALIAS("pci:v00008086d00001221sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "397A2AEB324BD53803C02A8");
