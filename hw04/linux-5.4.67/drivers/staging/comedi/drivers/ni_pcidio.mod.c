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
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x9a74b6d4, "mite_ack_linkc" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8387388e, "mite_sync_dma" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5ee557f2, "comedi_dio_insn_config" },
	{ 0x5981397b, "mite_release_channel" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x77fb8504, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xcb233033, "mite_detach" },
	{ 0x655d5794, "mite_free_ring" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x8982a2a9, "comedi_load_firmware" },
	{ 0xe0005b5e, "mite_alloc_ring" },
	{ 0x8aae7d6c, "mite_attach" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1000e51, "schedule" },
	{ 0xba312d7b, "current_task" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x97fe8284, "mite_dma_arm" },
	{ 0x72ea69ac, "mite_prep_dma" },
	{ 0xca5d2fcb, "comedi_buf_write_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x356024e4, "mite_request_channel_in_range" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfb578fc5, "memset" },
	{ 0xed37bee5, "mite_buf_change" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,mite");

MODULE_ALIAS("pci:v00001093d00001150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000012B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001320sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B17F356F97CE92424238DB0");
