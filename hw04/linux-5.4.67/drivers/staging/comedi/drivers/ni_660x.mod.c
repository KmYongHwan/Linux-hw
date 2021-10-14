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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x84e0848a, "comedi_pci_auto_unconfig" },
	{ 0xd691a3e2, "comedi_pci_driver_unregister" },
	{ 0xf6c69ae0, "comedi_pci_driver_register" },
	{ 0xc09dadce, "ni_tio_get_routing" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xda58fb16, "ni_tio_unset_routing" },
	{ 0xe26902e7, "ni_tio_set_routing" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7e2c2322, "ni_tio_cmd" },
	{ 0xf0b07687, "ni_tio_acknowledge" },
	{ 0x5f965fd, "mite_request_channel" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4e281e5, "ni_tio_init_counter" },
	{ 0x81cb8ea0, "ni_tio_cmdtest" },
	{ 0x9735c1c6, "ni_tio_insn_config" },
	{ 0xa80125b1, "ni_tio_insn_write" },
	{ 0xa07914f5, "ni_tio_insn_read" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0xa5e8eff3, "ni_gpct_device_construct" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0xe0005b5e, "mite_alloc_ring" },
	{ 0x8aae7d6c, "mite_attach" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x77fb8504, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xcb233033, "mite_detach" },
	{ 0x655d5794, "mite_free_ring" },
	{ 0xf2994b5e, "ni_gpct_device_destroy" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0x5981397b, "mite_release_channel" },
	{ 0x85796664, "ni_tio_set_mite_channel" },
	{ 0xe74dd851, "ni_tio_cancel" },
	{ 0xf76dcfc9, "comedi_buf_read_n_available" },
	{ 0x8387388e, "mite_sync_dma" },
	{ 0xed37bee5, "mite_buf_change" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x7eca9356, "ni_tio_handle_interrupt" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,ni_tio,ni_routing,ni_tiocmd,mite,comedi");

MODULE_ALIAS("pci:v00001093d00001310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002DB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002CC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001E30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001E40sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5564FAB9E09CA1CA03246BB");
