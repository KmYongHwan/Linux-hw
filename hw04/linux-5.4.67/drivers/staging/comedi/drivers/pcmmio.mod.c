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
	{ 0x93b4e7d, "comedi_legacy_detach" },
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x5596bdd6, "comedi_request_region" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x5ee557f2, "comedi_dio_insn_config" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi");


MODULE_INFO(srcversion, "5168B04B1E8205566ABF11B");
