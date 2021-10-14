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
	{ 0xc1514a3b, "free_irq" },
	{ 0x1a0920ae, "comedi_isadma_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x5f916ef7, "comedi_8254_init" },
	{ 0x5596bdd6, "comedi_request_region" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xe6ec9b7a, "comedi_8254_update_divisors" },
	{ 0xd6530855, "comedi_8254_write" },
	{ 0x336c5a37, "comedi_8254_set_mode" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0x15d64b25, "comedi_nsamples_left" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0x9219beeb, "comedi_8254_cascade_ns_to_timer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf63e47b8, "comedi_isadma_poll" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x93b4e7d, "comedi_legacy_detach" },
	{ 0xd54ce584, "comedi_isadma_free" },
	{ 0x8cb1ad78, "comedi_8254_pacer_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_isadma,comedi_8254");


MODULE_INFO(srcversion, "F06CA7717EF01F741911CC4");
