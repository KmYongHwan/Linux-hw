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
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0xc4142837, "seq_printf" },
	{ 0xf04a6f6e, "oxygen_read16" },
	{ 0x299ff7ee, "oxygen_pci_remove" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x177f671, "oxygen_write8_masked" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x671d73fd, "oxygen_write16_masked" },
	{ 0x1e63e55d, "oxygen_write_ac97_masked" },
	{ 0xd3d70f53, "snd_ctl_notify" },
	{ 0x2930f3b5, "oxygen_write_spi" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xafd462c3, "oxygen_pci_probe" },
	{ 0xfb1858a0, "snd_jack_new" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x45188062, "oxygen_write16" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x83f119f4, "snd_component_add" },
	{ 0x50570543, "oxygen_read8" },
	{ 0x486bc36e, "oxygen_reset_uart" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x6cd43018, "oxygen_write_uart" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x59048e4, "oxygen_write_i2c" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x2bd946b9, "oxygen_pci_pm" },
	{ 0xd771b195, "oxygen_pci_shutdown" },
	{ 0xa9e724fe, "snd_jack_report" },
	{ 0x5eca2bac, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-oxygen-lib,snd");

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008428bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");

MODULE_INFO(srcversion, "4E966709DD6CE78B2585E1F");
