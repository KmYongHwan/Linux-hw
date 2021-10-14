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
	{ 0x77179d2e, "param_ops_string" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x6c67570c, "alloc_arcdev" },
	{ 0xc45fd92e, "devm_arcnet_led_init" },
	{ 0x666d76b6, "com20020_found" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0xd620b865, "com20020_check" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6534792a, "arcnet_debug" },
	{ 0x64460505, "com20020_netdev_ops" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "arcnet,com20020");

MODULE_ALIAS("pci:v00001571d0000A001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A204sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A206sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00002978bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00002273bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00003263bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00003292bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00003294bc*sc*i*");
MODULE_ALIAS("pci:v000014BAd00006000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002200sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "582484549ADFF877EB81810");
