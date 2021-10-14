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
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x84e0848a, "comedi_pci_auto_unconfig" },
	{ 0xd691a3e2, "comedi_pci_driver_unregister" },
	{ 0xf6c69ae0, "comedi_pci_driver_register" },
	{ 0xcd330f4, "range_unknown" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc2ea1e21, "subdev_8255_init" },
	{ 0x81cb8ea0, "ni_tio_cmdtest" },
	{ 0x9735c1c6, "ni_tio_insn_config" },
	{ 0xa80125b1, "ni_tio_insn_write" },
	{ 0xa07914f5, "ni_tio_insn_read" },
	{ 0xf4e281e5, "ni_tio_init_counter" },
	{ 0xa5e8eff3, "ni_gpct_device_construct" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0xe0005b5e, "mite_alloc_ring" },
	{ 0x8aae7d6c, "mite_attach" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x4b6705ee, "comedi_pci_enable" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0xca5d2fcb, "comedi_buf_write_alloc" },
	{ 0x921123e, "ni_lookup_route_register" },
	{ 0xe26902e7, "ni_tio_set_routing" },
	{ 0xda58fb16, "ni_tio_unset_routing" },
	{ 0xe74dd851, "ni_tio_cancel" },
	{ 0x5981397b, "mite_release_channel" },
	{ 0x7e2c2322, "ni_tio_cmd" },
	{ 0xf0b07687, "ni_tio_acknowledge" },
	{ 0x85796664, "ni_tio_set_mite_channel" },
	{ 0x5f965fd, "mite_request_channel" },
	{ 0xec5b2fe0, "comedi_bytes_per_scan_cmd" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0xc09dadce, "ni_tio_get_routing" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xba312d7b, "current_task" },
	{ 0xd020ed9, "comedi_is_subdevice_running" },
	{ 0x7eca9356, "ni_tio_handle_interrupt" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x9a74b6d4, "mite_ack_linkc" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37ec0760, "mite_init_ring_descriptors" },
	{ 0xce314861, "comedi_bytes_per_scan" },
	{ 0x12a38747, "usleep_range" },
	{ 0x97fe8284, "mite_dma_arm" },
	{ 0x72ea69ac, "mite_prep_dma" },
	{ 0xd768db80, "comedi_buf_read_alloc" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x681f038a, "mite_bytes_in_transit" },
	{ 0x8387388e, "mite_sync_dma" },
	{ 0x5ee557f2, "comedi_dio_insn_config" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x77fb8504, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xcb233033, "mite_detach" },
	{ 0x655d5794, "mite_free_ring" },
	{ 0xf2994b5e, "ni_gpct_device_destroy" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xed37bee5, "mite_buf_change" },
	{ 0x9aaa561b, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_pci,comedi_8255,ni_tiocmd,ni_tio,ni_routing,mite");

MODULE_ALIAS("pci:v00001093d00000162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000014E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000014F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001580sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000015B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001870sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000018B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000018C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000028C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002B80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002B90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000710Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000716Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000716Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000717Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000717Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000071BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000072E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000072E9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "377B18B68D01AFA379AA30D");
