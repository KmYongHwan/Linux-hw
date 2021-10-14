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
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0xe6ec9b7a, "comedi_8254_update_divisors" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0x15d64b25, "comedi_nsamples_left" },
	{ 0x9219beeb, "comedi_8254_cascade_ns_to_timer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x4fe634f3, "range_bipolar2_5" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x8113872c, "range_unipolar10" },
	{ 0x1a0920ae, "comedi_isadma_alloc" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0xcd330f4, "range_unknown" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x5f916ef7, "comedi_8254_init" },
	{ 0x5596bdd6, "comedi_request_region" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x93b4e7d, "comedi_legacy_detach" },
	{ 0xd54ce584, "comedi_isadma_free" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x8cb1ad78, "comedi_8254_pacer_enable" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_8254,comedi_isadma");


MODULE_INFO(srcversion, "E64EEC9D692758ABCA9D7FC");
