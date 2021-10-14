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
	{ 0x9a43e199, "_dev_info" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0xea878430, "comedi_isadma_program" },
	{ 0xca784d4b, "comedi_isadma_set_mode" },
	{ 0xd068078a, "comedi_buf_read_samples" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1a0920ae, "comedi_isadma_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x5596bdd6, "comedi_request_region" },
	{ 0x12fba874, "comedi_isadma_disable" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0x5ee557f2, "comedi_dio_insn_config" },
	{ 0x93b4e7d, "comedi_legacy_detach" },
	{ 0xd54ce584, "comedi_isadma_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_isadma");


MODULE_INFO(srcversion, "2569AC92DA22295DF8E9C17");
