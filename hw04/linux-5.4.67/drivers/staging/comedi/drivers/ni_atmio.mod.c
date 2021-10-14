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
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0xcd330f4, "range_unknown" },
	{ 0xc2ea1e21, "subdev_8255_init" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0x9735c1c6, "ni_tio_insn_config" },
	{ 0xa80125b1, "ni_tio_insn_write" },
	{ 0xa07914f5, "ni_tio_insn_read" },
	{ 0xf4e281e5, "ni_tio_init_counter" },
	{ 0xa5e8eff3, "ni_gpct_device_construct" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5596bdd6, "comedi_request_region" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x921123e, "ni_lookup_route_register" },
	{ 0xe26902e7, "ni_tio_set_routing" },
	{ 0xda58fb16, "ni_tio_unset_routing" },
	{ 0xd020ed9, "comedi_is_subdevice_running" },
	{ 0xf76dcfc9, "comedi_buf_read_n_available" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0xc09dadce, "ni_tio_get_routing" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xba312d7b, "current_task" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5ee557f2, "comedi_dio_insn_config" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd068078a, "comedi_buf_read_samples" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x77145685, "pnp_device_detach" },
	{ 0x93b4e7d, "comedi_legacy_detach" },
	{ 0xf2994b5e, "ni_gpct_device_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_8255,ni_tio,ni_routing");

MODULE_ALIAS("pnp:dNIC1900*");
MODULE_ALIAS("acpi*:NIC1900:*");
MODULE_ALIAS("pnp:dNIC2400*");
MODULE_ALIAS("acpi*:NIC2400:*");
MODULE_ALIAS("pnp:dNIC2500*");
MODULE_ALIAS("acpi*:NIC2500:*");
MODULE_ALIAS("pnp:dNIC2600*");
MODULE_ALIAS("acpi*:NIC2600:*");
MODULE_ALIAS("pnp:dNIC2700*");
MODULE_ALIAS("acpi*:NIC2700:*");

MODULE_INFO(srcversion, "D48089CAD8A3E74AB0F5472");
